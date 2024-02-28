// Generated by commsdsl2tools_qt v6.3.0

#include "CfgEsrc.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgEsrc.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numSources(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSources;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_extInt(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::ExtInt;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("EXTINT0", 0)
                    .add("EXTINT1", 1)
                    .asMap();
        }

        static QVariantMap createProps_sourceType(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SourceType;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("None", 0)
                    .add("Frequency", 1)
                    .add("Time", 2)
                    .add("ExternalOsc", 3)
                    .asMap();
        }

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(0U, "polarity")
                    .add(1U, "gnssUtc")
                    .asMap();
        }

        static QVariantMap createProps_freq(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Freq;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(2U)
                    .asMap();
        }

        static QVariantMap createProps_reserved2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_withTemp(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::WithTemp;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_withAge(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::WithAge;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_timeToTemp(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TimeToTemp;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_maxDevLifeTime(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MaxDevLifeTime;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_offset(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Offset;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_offsetUncertainty(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::OffsetUncertainty;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_jitter(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Jitter;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_extInt(serHidden))
                .add(ElementMembers::createProps_sourceType(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .add(ElementMembers::createProps_freq(serHidden))
                .add(ElementMembers::createProps_reserved2(serHidden))
                .add(ElementMembers::createProps_withTemp(serHidden))
                .add(ElementMembers::createProps_withAge(serHidden))
                .add(ElementMembers::createProps_timeToTemp(serHidden))
                .add(ElementMembers::createProps_maxDevLifeTime(serHidden))
                .add(ElementMembers::createProps_offset(serHidden))
                .add(ElementMembers::createProps_offsetUncertainty(serHidden))
                .add(ElementMembers::createProps_jitter(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgEsrcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_numSources(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class CfgEsrcImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgEsrc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgEsrcImpl
    >
{
public:
    CfgEsrcImpl() = default;
    CfgEsrcImpl(const CfgEsrcImpl&) = delete;
    CfgEsrcImpl(CfgEsrcImpl&&) = delete;
    virtual ~CfgEsrcImpl() = default;
    CfgEsrcImpl& operator=(const CfgEsrcImpl&) = default;
    CfgEsrcImpl& operator=(CfgEsrcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgEsrc::CfgEsrc() : m_pImpl(new CfgEsrcImpl) {}
CfgEsrc::~CfgEsrc() = default;

CfgEsrc& CfgEsrc::operator=(const CfgEsrc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgEsrc& CfgEsrc::operator=(CfgEsrc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgEsrc::MsgIdParamType CfgEsrc::doGetId()
{
    return ::cc_ublox::message::CfgEsrc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgEsrc::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgEsrc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgEsrc::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgEsrc::resetImpl()
{
    m_pImpl->reset();
}

bool CfgEsrc::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgEsrc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgEsrc::MsgIdParamType CfgEsrc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgEsrc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgEsrc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgEsrc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgEsrc::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgEsrc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
