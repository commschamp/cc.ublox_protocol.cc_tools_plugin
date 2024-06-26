// Generated by commsdsl2tools_qt v6.3.3

#include "CfgSmgr.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgSmgr.h"

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
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_minGNSSFix(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MinGNSSFix;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_maxFreqChangeRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MaxFreqChangeRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_maxPhaseCorrRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MaxPhaseCorrRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_freqTolerance(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FreqTolerance;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_timeTolerance(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TimeTolerance;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_messageCfg(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MessageCfg;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "measInternal")
            .add(1U, "measGNSS")
            .add(2U, "measEXTINT0")
            .add(3U, "measEXTINT1")
            .asMap();
}

static QVariantMap createProps_maxSlewRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MaxSlewRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "disableInternal")
                .add(1U, "disableExternal")
                .add(2U, "preferenceMode")
                .add(3U, "enableGNSS")
                .add(4U, "enableEXTINT0")
                .add(5U, "enableEXTINT1")
                .add(6U, "enableHostMeasInt")
                .add(7U, "enableHostMeasExt")
                .add(10U, "useAnyFix")
                .add(11U, "disableMaxSlewRate")
                .add(12U, "issueFreqWarning")
                .add(13U, "issueTimeWarning")
                .asMap();
    }

    static QVariantMap createProps_tPCoherent(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::TPCoherent;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Coherent", 0)
                .add("NonCoherent", 1)
                .add("PostInitCoherent", 2)
                .asMap();
    }

    static QVariantMap createProps_bitsHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsHigh;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "disableOffset")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgSmgrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_bitsLow(true))
            .add(FlagsMembers::createProps_tPCoherent(true))
            .add(FlagsMembers::createProps_bitsHigh(true))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_minGNSSFix(false));
    props.append(createProps_maxFreqChangeRate(false));
    props.append(createProps_maxPhaseCorrRate(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_freqTolerance(false));
    props.append(createProps_timeTolerance(false));
    props.append(createProps_messageCfg(false));
    props.append(createProps_maxSlewRate(false));
    props.append(createProps_flags(false));
    return props;
}

} // namespace

class CfgSmgrImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgSmgr<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgSmgrImpl
    >
{
public:
    CfgSmgrImpl() = default;
    CfgSmgrImpl(const CfgSmgrImpl&) = delete;
    CfgSmgrImpl(CfgSmgrImpl&&) = delete;
    virtual ~CfgSmgrImpl() = default;
    CfgSmgrImpl& operator=(const CfgSmgrImpl&) = default;
    CfgSmgrImpl& operator=(CfgSmgrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgSmgr::CfgSmgr() : m_pImpl(new CfgSmgrImpl) {}
CfgSmgr::~CfgSmgr() = default;

CfgSmgr& CfgSmgr::operator=(const CfgSmgr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgSmgr& CfgSmgr::operator=(CfgSmgr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgSmgr::MsgIdParamType CfgSmgr::doGetId()
{
    return ::cc_ublox::message::CfgSmgr<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgSmgr::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgSmgr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgSmgr::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgSmgr::resetImpl()
{
    m_pImpl->reset();
}

bool CfgSmgr::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgSmgr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgSmgr::MsgIdParamType CfgSmgr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgSmgr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgSmgr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgSmgr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgSmgr::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgSmgr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
