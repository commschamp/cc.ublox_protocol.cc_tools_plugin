// Generated by commsdsl2tools_qt v6.3.0

#include "RxmRtcm.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmRtcm.h"

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
    using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
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
        using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "crcFailed")
                .asMap();
    }

    static QVariantMap createProps_msgUsed(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::MsgUsed;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("DoNotKnow", 0)
                .add("NotUsed", 1)
                .add("RTCM", 2)
                .asMap();
    }

    static QVariantMap createProps_bitsHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsHigh;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
        return props;
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_bitsLow(true))
            .add(FlagsMembers::createProps_msgUsed(true))
            .add(FlagsMembers::createProps_bitsHigh(true))
            .asMap();
}

static QVariantMap createProps_subType(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SubType;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_refStation(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RefStation;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_msgType(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRtcmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MsgType;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_flags(false));
    props.append(createProps_subType(false));
    props.append(createProps_refStation(false));
    props.append(createProps_msgType(false));
    return props;
}

} // namespace

class RxmRtcmImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmRtcm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmRtcmImpl
    >
{
public:
    RxmRtcmImpl() = default;
    RxmRtcmImpl(const RxmRtcmImpl&) = delete;
    RxmRtcmImpl(RxmRtcmImpl&&) = delete;
    virtual ~RxmRtcmImpl() = default;
    RxmRtcmImpl& operator=(const RxmRtcmImpl&) = default;
    RxmRtcmImpl& operator=(RxmRtcmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmRtcm::RxmRtcm() : m_pImpl(new RxmRtcmImpl) {}
RxmRtcm::~RxmRtcm() = default;

RxmRtcm& RxmRtcm::operator=(const RxmRtcm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRtcm& RxmRtcm::operator=(RxmRtcm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmRtcm::MsgIdParamType RxmRtcm::doGetId()
{
    return ::cc_ublox::message::RxmRtcm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmRtcm::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmRtcm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmRtcm::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmRtcm::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRtcm::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmRtcm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmRtcm::MsgIdParamType RxmRtcm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmRtcm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmRtcm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmRtcm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmRtcm::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmRtcm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
