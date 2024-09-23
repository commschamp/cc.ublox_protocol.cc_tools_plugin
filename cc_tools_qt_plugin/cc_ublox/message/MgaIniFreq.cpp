// Generated by commsdsl2tools_qt v6.3.4

#include "MgaIniFreq.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaIniFreq.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

struct FlagsMembers
{
    static QVariantMap createProps_source(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Source;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("EXTINT0", 0)
                .add("EXTINT1", 1)
                .asMap();
    }

    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Bits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "fall")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_source(true))
            .add(FlagsMembers::createProps_bits(true))
            .asMap();
}

static QVariantMap createProps_freq(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Freq;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_freqAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniFreqFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FreqAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_flags(false));
    props.append(createProps_freq(false));
    props.append(createProps_freqAcc(false));
    return props;
}

} // namespace

class MgaIniFreqImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaIniFreq<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaIniFreqImpl
    >
{
public:
    MgaIniFreqImpl() = default;
    MgaIniFreqImpl(const MgaIniFreqImpl&) = delete;
    MgaIniFreqImpl(MgaIniFreqImpl&&) = delete;
    virtual ~MgaIniFreqImpl() = default;
    MgaIniFreqImpl& operator=(const MgaIniFreqImpl&) = default;
    MgaIniFreqImpl& operator=(MgaIniFreqImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniFreq::MgaIniFreq() : m_pImpl(new MgaIniFreqImpl) {}
MgaIniFreq::~MgaIniFreq() = default;

MgaIniFreq& MgaIniFreq::operator=(const MgaIniFreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniFreq& MgaIniFreq::operator=(MgaIniFreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaIniFreq::MsgIdParamType MgaIniFreq::doGetId()
{
    return ::cc_ublox::message::MgaIniFreq<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaIniFreq::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniFreq::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniFreq::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniFreq::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniFreq::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniFreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniFreq::MsgIdParamType MgaIniFreq::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniFreq::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniFreq::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniFreq::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniFreq::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniFreq::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
